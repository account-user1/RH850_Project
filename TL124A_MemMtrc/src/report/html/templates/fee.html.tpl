<%import random %>
<h1>FEE Memory</h1>
% for fee in processor.fee:
	<h2>${fee.name}</h2>
	% for region in fee.regions:
		<div class="row">
			<div class="col-sm-8">
				<h2>${region.name}</h2>
				<div class="progress">
					<div class="progress-bar progress-bar-primary" style="width: ${percent(float(region.user_data) / region.available)}"></div>
					<div class="progress-bar progress-bar-warning" style="width: ${percent(float(region.overhead) / region.available)}"></div>
				</div>
				<ul class="list-unstyled">
					<li>
						<strong>Usage: ${percent(region.usage, 2)}<strong>
					</li>
					<li>
						<span class="text-primary">
							Data: ${sizeof(region.user_data)}
						</span>
					</li>
					<li>
						<span class="text-warning">
							Overhead: ${sizeof(region.overhead)}
						</span>
					</li>
				</ul>
				<table class="table table-condensed table-striped">
					<thead>
						<tr>
							<th>Block</th>
							<th>Size</th>
							<th>Footprint</th>
							<th>Overhead</th>
						</tr>
					</thead>
					<tbody>
						% for block in region.blocks:
							<tr>
								<td>${block.name}</td>
								<td>${block.size} byte${'s' if block.size != 1 else ''}</td>
								<td>${block.footprint} byte${'s' if block.footprint != 1 else ''}</td>
								<td>${block.overhead} byte${'s' if block.overhead != 1 else ''}</td>
							</tr>
						% endfor;
					</tbody>
				</table>
			</div>
			<div class="col-sm-4">
				<div id="feemap-${region.name}"></div>
			</div>
		</div>
	% endfor;
	<script type="text/javascript">
		$(document).ready(function() {
			% for region in fee.regions:
				$("#feemap-${region.name}").treemap({
					nodeData: {
						id: "${region.name}",
						children: [
							% for block in region.blocks:
								{
									id: "${block.name}",
									size: [${float(block.footprint) / region.available}],
									color: [${random.uniform(0, 1)}],
									% if block.instances > 1:
										children: [
										% for idx in range(block.instances):
											{
												id: "${block.name}_instance_${idx}",
												size: [${1.0 / block.instances}],
												color: [0.5],
											},
										% endfor;
									]
									% endif;
								},
							% endfor;
							{
								id: "Empty",
								size: [${float(region.free) / region.available}],
								color: [null]
							}
						]
					},
					labelsEnabled: true,
					dimensions: [360, 1600],
					reversed: true
				});
			% endfor;
		});
	</script>
% endfor;
