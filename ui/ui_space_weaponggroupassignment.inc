		<Page
			Location='205,72'
			MinimumSize='676,259'
			Name='weaponGroupAssignment'
			OnShowEffector='/effectors.scale.scalemiddleOut'
			RStyleDefault='rs_default'
			ScrollExtent='716,415'
			Size='716,415'
			UserMovable='true'
			UserResizable='true'
			Visible='false'
		>
			<Data
				addbutton='inner.comp.right.comp.buttons.buttonadd'
				bottomlist='inner.comp.right.comp.right.inner.pageList.list'
				bottomTextAttribs='inner.comp.right.comp.right.text.textAttribs'
				buttonclose='inner.mmc.close'
				leftlist='inner.comp.left.inner.pageList.list'
				Name='CodeData'
				removebutton='inner.comp.right.comp.buttons.buttonremove'
				toplist='inner.comp.right.comp.left.inner.pageList.list'
				topTextAttribs='inner.comp.right.comp.left.text.textAttribs'
			/>
			<Page
				BackgroundColor='#BEBEBE'
				MinimumSize='441,204'
				Name='inner'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='716,415'
				Size='716,415'
			>
				<Page
					Location='695,13'
					Name='mmc'
					OpacityRelativeMin='0.80'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc.rs_default'
					ScrollExtent='13,13'
					Size='13,13'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						IsCancelButton='true'
						Location='1,1'
						Name='close'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='11,10'
						Size='11,10'
						Style='/Styles.space.button.CloseDark.style'
					></Button>
				</Page>
				<Composite
					Location='1,-1'
					MinimumSize='441,204'
					Name='comp'
					Orientation='Horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='716,416'
					Size='716,416'
					SpacingType='Fill'
				>
					<Page
						Location='0,6'
						MaximumSize='231,16384'
						MinimumSize='150,184'
						Name='left'
						PackSize='f,a'
						ScrollExtent='231,409'
						Size='231,409'
					>
						<Page
							BackgroundTint='#00D6FB'
							Location='217,0'
							MaximumSize='16328,16328'
							Name='SingleVertLineLeft'
							PackLocation='fff,nfn'
							PackSize='f,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.vertLineGlow.rs_default'
							ScrollExtent='14,409'
							Size='14,409'
						>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								Location='5,0'
								MaximumSize='16328,16328'
								Name='lineT'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.vertLine.rs_default'
								ScrollExtent='5,409'
								Size='5,409'
							/>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#00D6FB'
								MaximumSize='16328,16328'
								Name='glowT'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.space.vertLineGlow.rs_default'
								ScrollExtent='14,409'
								Size='14,409'
							/>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								Location='5,0'
								MaximumSize='16328,16328'
								Name='lineB'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.vertLine.rs_default'
								ScrollExtent='5,409'
								Size='5,409'
							/>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#00D6FB'
								MaximumSize='16328,16328'
								Name='glowB'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.space.vertLineGlow.rs_default'
								ScrollExtent='14,409'
								Size='14,409'
							/>
						</Page>
						<Page
							Location='10,8'
							Name='caption'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							ScrollExtent='207,30'
							Size='207,30'
						>
							<Text
								Enabled='false'
								Font='bold_13'
								LocalText='[@UI_WEAPONGROUPASSIGNMENT:CAPTION]'
								Margin='6,0,0,0'
								MinimumSize='0,19'
								Name='text'
								OpacityRelativeMin='0.80'
								PackSize='a,f'
								PalText='titletext'
								ScrollExtent='207,30'
								Size='207,30'
								TextAlignmentVertical='Center'
								TextCapital='true'
								TextColor='#00354F'
							>@ui_weapongroupassignment:caption</Text>
						</Page>
						<Page
							Location='3,43'
							Name='inner'
							PackSize='a,a'
							ScrollExtent='228,325'
							Size='228,325'
						>
							<Text
								Enabled='false'
								Font='bold_12'
								LocalText='[@ui_weapongroupassignment:weapon_groups_available]'
								Location='4,0'
								Margin='2,2,2,2'
								MinimumSize='0,19'
								Name='text'
								OpacityRelativeMin='0.80'
								PackSize='a,f'
								PalText='header'
								RStyleDefault='rs_default'
								RStyleText='/Styles.space.boxes.textBack.rs_default'
								ScrollExtent='216,30'
								Size='216,28'
								TextAlignment='Center'
								TextColor='#97FFFF'
							>@ui_weapongroupassignment:weapon_groups_available</Text>
							<Page
								Location='4,21'
								Name='pageList'
								PackSize='a,a'
								RStyleDefault='rs_default'
								ScrollExtent='215,296'
								Size='215,296'
							>
								<DataSource
									Name='ListData'
									Size='128,64'
								>
									<Data
										Name='0'
										Size='128,64'
										Text='xxx weapongroup here'
									/>
									<Data
										Name='1'
										Size='128,64'
										Text='xxx weapongroup here'
									/>
								</DataSource>
								<Scrollbar
									Control='list'
									Enabled='false'
									Location='202,0'
									Name='scrollList'
									PackLocation='fff'
									PackSize='f,a'
									ScrollExtent='10,296'
									Size='10,296'
									Style='/Styles.space.scrollbar.vHud4.style'
								>
								</Scrollbar>
								<List
									BackgroundColor='#000000'
									BackgroundOpacity='0.00'
									DataSource='ListData'
									Location='0,7'
									MinimumScrollExtent='199,49'
									Name='list'
									OpacityRelativeMin='0.80'
									PackLocation='nfn,nfn'
									PackSize='a,a'
									ScrollExtent='199,298'
									SelectedRow='1'
									SelectedRowCount='1'
									SelectionAllowedMultiRow='false'
									Size='199,298'
									Style='/Styles.space.list.combo.style'
								/>
							</Page>
						</Page>
						<Button
							cmdstr='/ship weaponGroup defaults'
							LocalText='[@ui_weapongroupassignment:reset_defaults]'
							Location='27,381'
							Name='buttonReset'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='a,f'
							ScrollExtent='156,22'
							Size='156,22'
							Style='/Styles.space.button4.style'
							TextColor='#000000'
						>@ui_weapongroupassignment:reset_defaults</Button>
					</Page>
					<Page
						Location='231,0'
						Name='right'
						PackLocation='nfn,nfn'
						PackSize='f,a'
						ScrollExtent='485,416'
						Size='485,416'
					>
						<Composite
							Location='4,8'
							Name='comp'
							Orientation='Horizontal'
							PackSize='a,a'
							ScrollExtent='478,402'
							Size='478,402'
							SpacingType='Fill'
						>
							<Composite
								Name='left'
								PackSize='f,a'
								ScrollExtent='219,402'
								Size='219,402'
								SpacingType='Fill'
							>
								<Page
									Name='inner'
									PackSize='a,0.9'
									ScrollExtent='219,180'
									Size='219,180'
								>
									<Text
										Enabled='false'
										Font='bold_12'
										LocalText='[@ui_weapongroupassignment:all_weapons]'
										Location='0,26'
										Margin='2,2,2,2'
										MinimumSize='0,19'
										Name='text'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='header'
										RStyleDefault='rs_default'
										ScrollExtent='209,30'
										Size='209,19'
										TextAlignment='Center'
										TextColor='#97FFFF'
									>@ui_weapongroupassignment:all_weapons</Text>
									<Page
										Location='0,47'
										Name='pageList'
										PackSize='a,a'
										RStyleDefault='rs_default'
										ScrollExtent='219,124'
										Size='219,124'
									>
										<Scrollbar
											Control='list'
											Enabled='false'
											Location='206,-1'
											Name='scrollList'
											PackLocation='fff'
											PackSize='f,a'
											ScrollExtent='10,124'
											Size='10,124'
											Style='/Styles.space.scrollbar.vHud4.style'
										>
										</Scrollbar>
										<DataSource
											Name='ListData'
											Size='128,64'
										>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
										</DataSource>
										<List
											BackgroundColor='#000000'
											BackgroundOpacity='0.00'
											DataSource='ListData'
											Location='2,-1'
											MinimumScrollExtent='203,112'
											Name='list'
											OpacityRelativeMin='0.80'
											PackLocation='nfn,nfn'
											PackSize='a,a'
											ScrollExtent='203,124'
											SelectedRow='3'
											SelectedRowCount='1'
											SelectionAllowedMultiRow='false'
											Size='203,124'
											Style='/Styles.space.list.combo.style'
										/>
									</Page>
								</Page>
								<Page
									BackgroundTint='#1CFFFF'
									Location='0,180'
									Name='text'
									PackLocation='nfn,nfn'
									PackSize='a,f'
									PalBgTint='line1'
									ScrollExtent='219,222'
									Selectable='true'
									Size='219,222'
								>
									<Text
										Font='bold_12'
										LocalText='xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
'
										Location='8,9'
										Margin='4,4,4,4'
										Name='textAttribs'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='text1'
										RStyleDefault='/Styles.New.whitebox.rs_default'
										ScrollExtent='192,337'
										Size='192,337'
										TextColor='#96F4FC'
									>xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
</Text>
									<Scrollbar
										Control='textAttribs'
										Enabled='false'
										Location='207,7'
										Name='Scroll'
										Opacity='0.90'
										OpacityRelativeMin='0.80'
										PackLocation='fff,nfn'
										PackSize='f,a'
										ScrollExtent='11,205'
										Size='11,205'
										Style='/Styles.scrollbar.default.vHud4.style'
									>
									</Scrollbar>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='0.30'
										BackgroundTint='#01687E'
										Location='4,0'
										Name='box'
										PackLocation='nfn,nfn'
										PackSize='a,a'
										PalBgTint='back2'
										RStyleDefault='/Styles.New.whitebox_palW.rs_default'
										ScrollExtent='199,222'
										Size='199,222'
									/>
								</Page>
							</Composite>
							<Page
								Location='219,0'
								MaximumSize='38,16328'
								Name='buttons'
								PackLocation='nfn,nfn'
								PackSize='f,a'
								ScrollExtent='38,402'
								Size='38,402'
							>
								<Page
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									Location='10,214'
									MaximumSize='16328,16328'
									Name='bottomLine'
									PackLocation='cfc,fff'
									PackSize='f,h'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.splitLinebottom.rs_default'
									ScrollExtent='19,188'
									Size='19,188'
								/>
								<Page
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									Location='10,0'
									MaximumSize='16328,16328'
									Name='topLine'
									PackLocation='cfc,nfn'
									PackSize='f,h'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.splitLinetop.rs_default'
									ScrollExtent='19,188'
									Size='19,188'
								/>
								<Button
									BackgroundColor='#FFFFFF'
									IconMargin='4,2,2,2'
									Location='22,191'
									MaximumSize='32,32'
									Name='buttonAdd'
									OpacityRelativeMin='0.80'
									PackLocation='cfc,cfc'
									PackSize='f,f'
									ScrollExtent='16,19'
									Size='16,19'
									Style='/Styles.space.button.add.style'
								></Button>
								<Button
									BackgroundColor='#FFFFFF'
									IconMargin='4,2,4,2'
									Location='0,191'
									MaximumSize='32,32'
									Name='buttonRemove'
									OpacityRelativeMin='0.80'
									PackLocation='cfc,cfc'
									PackSize='f,f'
									ScrollExtent='16,19'
									Size='16,19'
									Style='/Styles.space.button.remove.style'
									TextColor='#000000'
								></Button>
							</Page>
							<Composite
								Location='257,0'
								Name='right'
								PackSize='f,a'
								ScrollExtent='221,402'
								Size='221,402'
								SpacingType='Fill'
							>
								<Page
									Name='inner'
									PackSize='a,0.9'
									ScrollExtent='221,180'
									Size='221,180'
								>
									<Text
										Enabled='false'
										Font='bold_12'
										LocalText='[@ui_weapongroupassignment:selected_group]'
										Location='0,26'
										Margin='2,2,2,2'
										MinimumSize='0,19'
										Name='text'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='header'
										RStyleDefault='rs_default'
										ScrollExtent='204,30'
										Size='204,19'
										TextAlignment='Center'
										TextColor='#97FFFF'
									>@ui_weapongroupassignment:selected_group</Text>
									<Page
										Location='0,47'
										Name='pageList'
										PackSize='a,a'
										RStyleDefault='rs_default'
										ScrollExtent='221,124'
										Size='221,124'
									>
										<Scrollbar
											Control='list'
											Enabled='false'
											Location='208,-1'
											Name='scrollList'
											PackLocation='fff'
											PackSize='f,a'
											ScrollExtent='10,124'
											Size='10,124'
											Style='/Styles.space.scrollbar.vHud4.style'
										>
										</Scrollbar>
										<DataSource
											Name='ListData'
											Size='128,64'
										>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
										</DataSource>
										<List
											BackgroundColor='#000000'
											BackgroundOpacity='0.00'
											DataSource='ListData'
											Location='2,-1'
											MinimumScrollExtent='205,112'
											Name='list'
											OpacityRelativeMin='0.80'
											PackLocation='nfn,nfn'
											PackSize='a,a'
											ScrollExtent='205,124'
											SelectedRow='4'
											SelectedRowCount='1'
											SelectionAllowedMultiRow='false'
											Size='205,124'
											Style='/Styles.space.list.combo.style'
										/>
									</Page>
								</Page>
								<Page
									BackgroundTint='#1CFFFF'
									Location='0,180'
									Name='text'
									PackLocation='nfn,nfn'
									PackSize='a,f'
									PalBgTint='line1'
									ScrollExtent='221,222'
									Selectable='true'
									Size='221,222'
								>
									<Text
										Font='bold_12'
										LocalText='xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
'
										Location='8,9'
										Margin='4,4,4,4'
										Name='textAttribs'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='text1'
										RStyleDefault='/Styles.New.whitebox.rs_default'
										ScrollExtent='194,337'
										Size='194,337'
										TextColor='#96F4FC'
									>xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
</Text>
									<Scrollbar
										Control='textAttribs'
										Enabled='false'
										Location='209,7'
										Name='Scroll'
										Opacity='0.90'
										OpacityRelativeMin='0.80'
										PackLocation='fff,nfn'
										PackSize='f,a'
										ScrollExtent='11,205'
										Size='11,205'
										Style='/Styles.scrollbar.default.vHud4.style'
									>
									</Scrollbar>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='0.30'
										BackgroundTint='#01687E'
										Location='4,0'
										Name='box'
										PackLocation='nfn,nfn'
										PackSize='a,a'
										PalBgTint='back2'
										RStyleDefault='/Styles.New.whitebox_palW.rs_default'
										ScrollExtent='201,222'
										Size='201,222'
									/>
								</Page>
							</Composite>
						</Composite>
					</Page>
				</Composite>
			</Page>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='716,415'
				Size='716,415'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Name='background'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='716,415'
					Size='716,415'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,393'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='571,22'
						Size='571,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomLeft.rs_default'
							ScrollExtent='571,9'
							Size='571,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='0,9'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowBL.rs_default'
							ScrollExtent='571,19'
							Size='571,19'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='187,393'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='529,22'
						Size='529,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomRight.rs_default'
							ScrollExtent='529,9'
							Size='529,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='-5,9'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowBR.rs_default'
							ScrollExtent='534,19'
							Size='534,19'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='187,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='529,22'
						Size='529,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopRight.rs_default'
							ScrollExtent='529,9'
							Size='529,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='-5,-6'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowTR.rs_default'
							ScrollExtent='534,17'
							Size='534,17'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Name='outlineTL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='571,22'
						Size='571,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='571,9'
							Size='571,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='0,-6'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowTL.rs_default'
							ScrollExtent='571,17'
							Size='571,17'
						/>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='-1,2'
						Name='back2'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.boxes.generic8_noshader.rs_default'
						ScrollExtent='717,411'
						Size='717,411'
					/>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='-1,2'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.spaceglow.rs_default'
						ScrollExtent='717,411'
						Selectable='true'
						Size='717,411'
					/>
				</Page>
			</Page>
		</Page>
