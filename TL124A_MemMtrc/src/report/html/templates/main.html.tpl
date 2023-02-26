<html>
	<head>
		<style type="text/css">${css}</style>
		<style type="text/css" media="print">
			.tab-content > .tab-pane {
				display: block !important;
				opacity: 1 !important;
				visibility: visible !important;
			}
			.nav-tabs {
				visibility: hidden !important;
			}
		</style>
		<script type="text/javascript">${js}</script>
		<title>Memory Metrics</title>
	</head>
	<body>
		<div class="container">
			<ul class="nav nav-tabs">
				<li class="active">
					<a href="#overview" data-toggle="tab">
						Overview
					</a>
				</li>
				<li>
					<a href="#flash" data-toggle="tab">
						Flash
					</a>
				</li>
				<li>
					<a href="#ram" data-toggle="tab">
						RAM
					</a>
				</li>
				<li>
					<a href="#fee" data-toggle="tab">
						FEE
					</a>
				</li>
			</ul>
			<div class="tab-content">
				<div class="tab-pane active" id="overview">
					<%include file="overview.html.tpl"/>
				</div>
				<div class="tab-pane" id="flash">
					<%include file="flash.html.tpl"/>
				</div>
				<div class="tab-pane" id="ram">
					<%include file="ram.html.tpl"/>
				</div>
				<div class="tab-pane" id="fee">
					<%include file="fee.html.tpl"/>
				</div>
			</div>
		</div>
	</body>
</html>
