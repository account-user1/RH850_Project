<div class="row">
	<div class="col-sm-8">
		<h1>Memory Overview</h1>
		<dl class="dl-horizontal">
			<dt>Program:</dt>
			<dd>${processor.program}</dd>
			<dt>Version:</dt>
			<dd>${processor.version}</dd>
		</dl>
		<table class="table">
			<thead>
				<tr>
					<th>Section</th>
					<th>Used</th>
					<th>Available</th>
					<th>Utilization</th>
				</tr>
			</thead>
			<tbody>
				% for mem in processor.memories:
					<tr>
						<td>${mem.name}</td>
						<td>${sizeof(mem.consumed)}</td>
						<td>${sizeof(mem.available)}</td>
						<td>
							<div class="progress">
								<div class="progress-bar
								% if mem.near_limit:
									progress-bar-warning
								% elif mem.over_limit:
									progress-bar-danger
								% else:
									progress-bar-success
								% endif;
								" style="width:${percent(mem.usage)};">
									${percent(mem.usage, 1)}
								</div>
							</div>
						</td>
					</tr>
				% endfor;
			</tbody>
		</table>
	</div>
	<div class="col-sm-4">
		<canvas id="radar"></canvas>
	</div>
</div>
<script type="text/javascript">
	<% labels = processor.memories %>
	$(document).ready(function() {
		var myRadarChart = new Chart($('#radar'), {
			type: 'radar',
			data: {
				labels: ["${'","'.join(mem.name for mem in processor.memories)}"],
				datasets: [{
					label: '',
					backgroundColor: "rgba(179,181,198,0.2)",
					borderColor: "rgba(179,181,198,1)",
					pointBackgroundColor: "rgba(179,181,198,1)",
					pointBorderColor: "#fff",
					pointHoverBackgroundColor: "#fff",
					pointHoverBorderColor: "rgba(179,181,198,1)",
					data: ${[(mem.usage * 100) for mem in processor.memories]}
				}]
			},
			options: {
				legend: {
					display: false,
				},
				scale: {
					ticks: {
						min: 0,
						max: 100
					}
				}
			}
		});
	});
</script>
