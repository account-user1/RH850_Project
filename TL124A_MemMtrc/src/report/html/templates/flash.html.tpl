<h1>Flash Usage</h1>
% for flash in processor.flash:
	<div class="progress">
		<div class="progress-bar
		% if flash.near_limit:
			progress-bar-warning
		% elif flash.over_limit:
			progress-bar-danger
		% else:
			progress-bar-success
		% endif;
		" style="width:${percent(flash.usage)};">
			${percent(flash.usage, 1)}
		</div>
	</div>
	<table class="table table-condensed table-striped">
		<thead>
			<tr>
				<th>Region</th>
				<th>Size</th>
				<th>Start</th>
				<th>End</th>
				<th>Usage</th>
				<th>Utilization</th>
			</tr>
		</thead>
		<tbody>
			% for region in flash.regions:
				<tr>
					<td>${region.name}</td>
					<td>${sizeof(region.size)}</td>
					<td>${'0x%08X' % region.start}</td>
					<td>${'0x%08X' % region.end}</td>
					<td>${sizeof(region.usage)}</td>
					<td>${percent(region.percent, 1)}</td>
				</tr>
			% endfor;
		</tbody>
	</table>
	% for region in flash.regions:
		<h2>${region.name}</h2>
		<div class="progress">
			<div class="progress-bar" style="width:${percent(region.percent)};">
				${percent(region.percent, 1)}
			</div>
		</div>
		<table class="table table-condensed table-striped">
			<thead>
				<tr>
					<th>Section</th>
					<th>Start</th>
					<th>Size</th>
				</tr>
			</thead>
			<tbody>
				% for section in sorted(region.sections, key=lambda section: section.length, reverse=True):
					% if section.length > 0:
						<tr>
							<td>${section.name}</td>
							<td>${'0x%08X' % section.start}</td>
							<td>${sizeof(section.length)} byte${'s' if section.length != 1 else ''}</td>
						</tr>
					% endif;
				% endfor;
			</tbody>
		</table>
	% endfor;
% endfor;
