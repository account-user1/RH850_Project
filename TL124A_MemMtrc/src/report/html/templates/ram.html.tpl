<h1>RAM Usage</h1>
% for ram in processor.ram:
	<h2>${ram.name}</h2>
	<div class="progress">
		<div class="progress-bar
		% if ram.near_limit:
			progress-bar-warning
		% elif ram.over_limit:
			progress-bar-danger
		% else:
			progress-bar-success
		% endif;
		" style="width:${percent(ram.usage)};">
			${percent(ram.usage, 1)}
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
			% for section in sorted(ram.sections, key=lambda section: section.length, reverse=True):
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
