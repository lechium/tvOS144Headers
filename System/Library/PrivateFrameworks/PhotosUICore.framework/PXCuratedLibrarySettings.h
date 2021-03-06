/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXCuratedLibrarySettings : PXSettings {

	BOOL _enablePlayMovieInYears;
	BOOL _enableSlideshowInYears;
	BOOL _launchToSavedAllPhotosScrollPosition;
	BOOL _emulatesEmptyLibrary;
	BOOL _showStatusBar;
	BOOL _secondaryToolbarAlwaysVisible;
	BOOL _alwaysShowSecondaryToolbarAtBottom;
	BOOL _enableTapOnTitleToScroll;
	BOOL _enableCustomScrollToTopOrBottom;
	BOOL _useSaliency;
	BOOL _showSaliencyRects;
	BOOL _hideStatusFooter;
	BOOL _hideStatusFooterInSelectMode;
	BOOL _hideAnalyzingStatus;
	BOOL _forceFloatingHeaderVisible;
	BOOL _showDebugInformationInFloatingHeader;
	BOOL _enableShowAllButtons;
	BOOL _allowsCustomDateTitles;
	BOOL _showAllHighlights;
	BOOL _useCustomDaysCurationType;
	BOOL _hideRecents;
	BOOL _hideAggregations;
	BOOL _enableInlinePlayback;
	BOOL _forcePlayback;
	BOOL _playBestTimeRange;
	BOOL _enablePlaybackDiagnostics;
	BOOL _stabilizeLivePhotos;
	BOOL _firstTimeExperienceAlwaysLogReadiness;
	BOOL _enbaleInteractiveTransition;
	BOOL _enableSnapshotMode;
	BOOL _enableRecentlyEditedAlbum;
	BOOL _exaggerateContrast;
	BOOL _forceBadgesOnAllAssets;
	BOOL _forceShowAllButtonsVisible;
	unsigned short _daysCurationType;
	double _recentHighlightsTimeInterval;
	NSString* _savedAllPhotosScrollPositionAnchorAssetIdentifier;
	double _bottomCenterSecondaryToolbarWidth;
	double _scrollSnapMaximumDecelerationFactor;
	double _scrollSnapMaximumAccelerationFactor;
	double _scrollSnapMinimumSpeed;
	double _floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
	double _floatingHeaderFadeOverDistance;
	double _floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
	double _floatingHeaderButtonsFadeOverDistance;
	double _floatingHeadersAppearanceCrossfadeDuration;
	double _monthsFloatingHeadersDistanceFromSafeAreaTop;
	double _monthsFloatingHeadersAppearanceCrossfadeStartDistance;
	double _monthsFloatingHeadersAppearanceCrossfadeDistance;
	double _monthsFloatingHeadersFadeoutDistance;
	double _monthsFloatingHeadersSubtitleAlpha;
	double _monthsInlineHeadersFadeoutOffset;
	double _monthsInlineHeadersFadeoutDistance;
	double _monthsInlineHeadersFadeoutMinimumAlpha;
	double _yearsHeadersFadeoutOffset;
	double _yearsHeadersFadeoutDistance;
	double _yearsHeadersFadeoutMinimumAlpha;
	long long _largeHeroDensity;
	double _largeHeroMinimumScore;
	double _aspectRatioForCompactPortraitYears;
	double _aspectRatioForCompactLandscapeYears;
	double _aspectRatioForRegularYears;
	long long _forcedNumberOfYearsColumn;
	double _aspectRatioForCompactPortraitMonths;
	double _spacingBetweenDays;
	double _interitemSpacingForDays;
	double _allowSpecialPanoHeaders;
	double _topInsetForVisibilityAnchoring;
	double _sectionShadowOpacity;
	double _skimmingScale;
	long long _sectionsToPrefetch;
	double _faultInDistance;
	double _faultOutPadding;
	double _minimumVisibleHeightForTopMostSection;
	double _yearsHeaderGradientAlpha;
	double _yearsHeaderGradientHeight;
	double _monthsHeaderGradientAlpha;
	double _monthsHeaderGradientHeight;
	double _monthsSmallHeaderGradientHeight;
	double _daysHeaderGradientAlpha;
	double _daysHeaderGradientHeight;
	double _statusBarGradientAlpha;
	double _statusBarGradientHeight;
	double _statusBarGradientAndStyleFadeDuration;
	long long _initialZoomLevel;
	double _nonInterestingPromotionScore;
	double _minAutoplaySuggestionScore;
	long long _maxNumberOfPlayingItems;
	double _playbackVisibleRectEdgeInset;
	double _livePhotoLoopingCrossfadeDuration;
	double _slideshowTriggerDelay;
	double _slideshowIntervalDelay;
	long long _firstTimeExperienceMaxNonProcessedHighlights;
	long long _firstTimeExperienceMaxNonProcessedAssets;
	double _defaultZoomLevelTransitionAnimationDuration;
	double _defaultZoomLevelTransitionMaximumScaleAroundAnchor;
	double _nonAnchorYearsFadeSpeed;
	double _nonAnchorMonthsFadeSpeed;
	double _nonAnchorDaysFadeSpeed;
	double _transitionToOrFromAllPhotosAnimationDuration;
	double _transitionToOrFromAllPhotosScale;
	double _transitionScaleForDayNotMatchingMonths;
	double _zoomLevelPinchSignificantScaleDelta;
	double _swipeBackGestureMinAngle;
	double _swipeBackGestureMinTranslation;
	double _zoomLevelControlSegmentExpansionFactor;

}

@property (assign,nonatomic) BOOL enablePlayMovieInYears;                                                          //@synthesize enablePlayMovieInYears=_enablePlayMovieInYears - In the implementation block
@property (assign,nonatomic) BOOL enableSlideshowInYears;                                                          //@synthesize enableSlideshowInYears=_enableSlideshowInYears - In the implementation block
@property (assign,nonatomic) BOOL launchToSavedAllPhotosScrollPosition;                                            //@synthesize launchToSavedAllPhotosScrollPosition=_launchToSavedAllPhotosScrollPosition - In the implementation block
@property (nonatomic,copy) NSString * savedAllPhotosScrollPositionAnchorAssetIdentifier;                           //@synthesize savedAllPhotosScrollPositionAnchorAssetIdentifier=_savedAllPhotosScrollPositionAnchorAssetIdentifier - In the implementation block
@property (assign,nonatomic) BOOL emulatesEmptyLibrary;                                                            //@synthesize emulatesEmptyLibrary=_emulatesEmptyLibrary - In the implementation block
@property (assign,nonatomic) BOOL showStatusBar;                                                                   //@synthesize showStatusBar=_showStatusBar - In the implementation block
@property (assign,nonatomic) BOOL secondaryToolbarAlwaysVisible;                                                   //@synthesize secondaryToolbarAlwaysVisible=_secondaryToolbarAlwaysVisible - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowSecondaryToolbarAtBottom;                                              //@synthesize alwaysShowSecondaryToolbarAtBottom=_alwaysShowSecondaryToolbarAtBottom - In the implementation block
@property (assign,nonatomic) double bottomCenterSecondaryToolbarWidth;                                             //@synthesize bottomCenterSecondaryToolbarWidth=_bottomCenterSecondaryToolbarWidth - In the implementation block
@property (assign,nonatomic) BOOL enableTapOnTitleToScroll;                                                        //@synthesize enableTapOnTitleToScroll=_enableTapOnTitleToScroll - In the implementation block
@property (assign,nonatomic) BOOL enableCustomScrollToTopOrBottom;                                                 //@synthesize enableCustomScrollToTopOrBottom=_enableCustomScrollToTopOrBottom - In the implementation block
@property (assign,nonatomic) double scrollSnapMaximumDecelerationFactor;                                           //@synthesize scrollSnapMaximumDecelerationFactor=_scrollSnapMaximumDecelerationFactor - In the implementation block
@property (assign,nonatomic) double scrollSnapMaximumAccelerationFactor;                                           //@synthesize scrollSnapMaximumAccelerationFactor=_scrollSnapMaximumAccelerationFactor - In the implementation block
@property (assign,nonatomic) double scrollSnapMinimumSpeed;                                                        //@synthesize scrollSnapMinimumSpeed=_scrollSnapMinimumSpeed - In the implementation block
@property (assign,nonatomic) double floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;                      //@synthesize floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom=_floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom - In the implementation block
@property (assign,nonatomic) double floatingHeaderFadeOverDistance;                                                //@synthesize floatingHeaderFadeOverDistance=_floatingHeaderFadeOverDistance - In the implementation block
@property (assign,nonatomic) double floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;              //@synthesize floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop=_floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop - In the implementation block
@property (assign,nonatomic) double floatingHeaderButtonsFadeOverDistance;                                         //@synthesize floatingHeaderButtonsFadeOverDistance=_floatingHeaderButtonsFadeOverDistance - In the implementation block
@property (assign,nonatomic) double floatingHeadersAppearanceCrossfadeDuration;                                    //@synthesize floatingHeadersAppearanceCrossfadeDuration=_floatingHeadersAppearanceCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersDistanceFromSafeAreaTop;                                  //@synthesize monthsFloatingHeadersDistanceFromSafeAreaTop=_monthsFloatingHeadersDistanceFromSafeAreaTop - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersAppearanceCrossfadeStartDistance;                         //@synthesize monthsFloatingHeadersAppearanceCrossfadeStartDistance=_monthsFloatingHeadersAppearanceCrossfadeStartDistance - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersAppearanceCrossfadeDistance;                              //@synthesize monthsFloatingHeadersAppearanceCrossfadeDistance=_monthsFloatingHeadersAppearanceCrossfadeDistance - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersFadeoutDistance;                                          //@synthesize monthsFloatingHeadersFadeoutDistance=_monthsFloatingHeadersFadeoutDistance - In the implementation block
@property (assign,nonatomic) double monthsFloatingHeadersSubtitleAlpha;                                            //@synthesize monthsFloatingHeadersSubtitleAlpha=_monthsFloatingHeadersSubtitleAlpha - In the implementation block
@property (assign,nonatomic) double monthsInlineHeadersFadeoutOffset;                                              //@synthesize monthsInlineHeadersFadeoutOffset=_monthsInlineHeadersFadeoutOffset - In the implementation block
@property (assign,nonatomic) double monthsInlineHeadersFadeoutDistance;                                            //@synthesize monthsInlineHeadersFadeoutDistance=_monthsInlineHeadersFadeoutDistance - In the implementation block
@property (assign,nonatomic) double monthsInlineHeadersFadeoutMinimumAlpha;                                        //@synthesize monthsInlineHeadersFadeoutMinimumAlpha=_monthsInlineHeadersFadeoutMinimumAlpha - In the implementation block
@property (assign,nonatomic) double yearsHeadersFadeoutOffset;                                                     //@synthesize yearsHeadersFadeoutOffset=_yearsHeadersFadeoutOffset - In the implementation block
@property (assign,nonatomic) double yearsHeadersFadeoutDistance;                                                   //@synthesize yearsHeadersFadeoutDistance=_yearsHeadersFadeoutDistance - In the implementation block
@property (assign,nonatomic) double yearsHeadersFadeoutMinimumAlpha;                                               //@synthesize yearsHeadersFadeoutMinimumAlpha=_yearsHeadersFadeoutMinimumAlpha - In the implementation block
@property (assign,nonatomic) BOOL useSaliency;                                                                     //@synthesize useSaliency=_useSaliency - In the implementation block
@property (assign,nonatomic) BOOL showSaliencyRects;                                                               //@synthesize showSaliencyRects=_showSaliencyRects - In the implementation block
@property (assign,nonatomic) long long largeHeroDensity;                                                           //@synthesize largeHeroDensity=_largeHeroDensity - In the implementation block
@property (assign,nonatomic) double largeHeroMinimumScore;                                                         //@synthesize largeHeroMinimumScore=_largeHeroMinimumScore - In the implementation block
@property (assign,nonatomic) double aspectRatioForCompactPortraitYears;                                            //@synthesize aspectRatioForCompactPortraitYears=_aspectRatioForCompactPortraitYears - In the implementation block
@property (assign,nonatomic) double aspectRatioForCompactLandscapeYears;                                           //@synthesize aspectRatioForCompactLandscapeYears=_aspectRatioForCompactLandscapeYears - In the implementation block
@property (assign,nonatomic) double aspectRatioForRegularYears;                                                    //@synthesize aspectRatioForRegularYears=_aspectRatioForRegularYears - In the implementation block
@property (assign,nonatomic) long long forcedNumberOfYearsColumn;                                                  //@synthesize forcedNumberOfYearsColumn=_forcedNumberOfYearsColumn - In the implementation block
@property (assign,nonatomic) double aspectRatioForCompactPortraitMonths;                                           //@synthesize aspectRatioForCompactPortraitMonths=_aspectRatioForCompactPortraitMonths - In the implementation block
@property (assign,nonatomic) double spacingBetweenDays;                                                            //@synthesize spacingBetweenDays=_spacingBetweenDays - In the implementation block
@property (assign,nonatomic) double interitemSpacingForDays;                                                       //@synthesize interitemSpacingForDays=_interitemSpacingForDays - In the implementation block
@property (assign,nonatomic) double allowSpecialPanoHeaders;                                                       //@synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders - In the implementation block
@property (assign,nonatomic) double topInsetForVisibilityAnchoring;                                                //@synthesize topInsetForVisibilityAnchoring=_topInsetForVisibilityAnchoring - In the implementation block
@property (assign,nonatomic) double sectionShadowOpacity;                                                          //@synthesize sectionShadowOpacity=_sectionShadowOpacity - In the implementation block
@property (assign,nonatomic) double skimmingScale;                                                                 //@synthesize skimmingScale=_skimmingScale - In the implementation block
@property (assign,nonatomic) long long sectionsToPrefetch;                                                         //@synthesize sectionsToPrefetch=_sectionsToPrefetch - In the implementation block
@property (assign,nonatomic) double faultInDistance;                                                               //@synthesize faultInDistance=_faultInDistance - In the implementation block
@property (assign,nonatomic) double faultOutPadding;                                                               //@synthesize faultOutPadding=_faultOutPadding - In the implementation block
@property (assign,nonatomic) BOOL hideStatusFooter;                                                                //@synthesize hideStatusFooter=_hideStatusFooter - In the implementation block
@property (assign,nonatomic) BOOL hideStatusFooterInSelectMode;                                                    //@synthesize hideStatusFooterInSelectMode=_hideStatusFooterInSelectMode - In the implementation block
@property (assign,nonatomic) BOOL hideAnalyzingStatus;                                                             //@synthesize hideAnalyzingStatus=_hideAnalyzingStatus - In the implementation block
@property (assign,nonatomic) BOOL forceFloatingHeaderVisible;                                                      //@synthesize forceFloatingHeaderVisible=_forceFloatingHeaderVisible - In the implementation block
@property (assign,nonatomic) BOOL showDebugInformationInFloatingHeader;                                            //@synthesize showDebugInformationInFloatingHeader=_showDebugInformationInFloatingHeader - In the implementation block
@property (assign,nonatomic) double minimumVisibleHeightForTopMostSection;                                         //@synthesize minimumVisibleHeightForTopMostSection=_minimumVisibleHeightForTopMostSection - In the implementation block
@property (assign,nonatomic) BOOL enableShowAllButtons;                                                            //@synthesize enableShowAllButtons=_enableShowAllButtons - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomDateTitles;                                                          //@synthesize allowsCustomDateTitles=_allowsCustomDateTitles - In the implementation block
@property (assign,nonatomic) double yearsHeaderGradientAlpha;                                                      //@synthesize yearsHeaderGradientAlpha=_yearsHeaderGradientAlpha - In the implementation block
@property (assign,nonatomic) double yearsHeaderGradientHeight;                                                     //@synthesize yearsHeaderGradientHeight=_yearsHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double monthsHeaderGradientAlpha;                                                     //@synthesize monthsHeaderGradientAlpha=_monthsHeaderGradientAlpha - In the implementation block
@property (assign,nonatomic) double monthsHeaderGradientHeight;                                                    //@synthesize monthsHeaderGradientHeight=_monthsHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double monthsSmallHeaderGradientHeight;                                               //@synthesize monthsSmallHeaderGradientHeight=_monthsSmallHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double daysHeaderGradientAlpha;                                                       //@synthesize daysHeaderGradientAlpha=_daysHeaderGradientAlpha - In the implementation block
@property (assign,nonatomic) double daysHeaderGradientHeight;                                                      //@synthesize daysHeaderGradientHeight=_daysHeaderGradientHeight - In the implementation block
@property (assign,nonatomic) double statusBarGradientAlpha;                                                        //@synthesize statusBarGradientAlpha=_statusBarGradientAlpha - In the implementation block
@property (assign,nonatomic) double statusBarGradientHeight;                                                       //@synthesize statusBarGradientHeight=_statusBarGradientHeight - In the implementation block
@property (assign,nonatomic) double statusBarGradientAndStyleFadeDuration;                                         //@synthesize statusBarGradientAndStyleFadeDuration=_statusBarGradientAndStyleFadeDuration - In the implementation block
@property (assign,nonatomic) long long initialZoomLevel;                                                           //@synthesize initialZoomLevel=_initialZoomLevel - In the implementation block
@property (assign,nonatomic) BOOL showAllHighlights;                                                               //@synthesize showAllHighlights=_showAllHighlights - In the implementation block
@property (assign,nonatomic) BOOL useCustomDaysCurationType;                                                       //@synthesize useCustomDaysCurationType=_useCustomDaysCurationType - In the implementation block
@property (assign,nonatomic) unsigned short daysCurationType;                                                      //@synthesize daysCurationType=_daysCurationType - In the implementation block
@property (assign,nonatomic) double nonInterestingPromotionScore;                                                  //@synthesize nonInterestingPromotionScore=_nonInterestingPromotionScore - In the implementation block
@property (assign,nonatomic) BOOL hideRecents;                                                                     //@synthesize hideRecents=_hideRecents - In the implementation block
@property (assign,nonatomic) BOOL hideAggregations;                                                                //@synthesize hideAggregations=_hideAggregations - In the implementation block
@property (assign,nonatomic) BOOL enableInlinePlayback;                                                            //@synthesize enableInlinePlayback=_enableInlinePlayback - In the implementation block
@property (assign,nonatomic) BOOL forcePlayback;                                                                   //@synthesize forcePlayback=_forcePlayback - In the implementation block
@property (assign,nonatomic) double minAutoplaySuggestionScore;                                                    //@synthesize minAutoplaySuggestionScore=_minAutoplaySuggestionScore - In the implementation block
@property (assign,nonatomic) BOOL playBestTimeRange;                                                               //@synthesize playBestTimeRange=_playBestTimeRange - In the implementation block
@property (assign,nonatomic) long long maxNumberOfPlayingItems;                                                    //@synthesize maxNumberOfPlayingItems=_maxNumberOfPlayingItems - In the implementation block
@property (assign,nonatomic) double playbackVisibleRectEdgeInset;                                                  //@synthesize playbackVisibleRectEdgeInset=_playbackVisibleRectEdgeInset - In the implementation block
@property (assign,nonatomic) double livePhotoLoopingCrossfadeDuration;                                             //@synthesize livePhotoLoopingCrossfadeDuration=_livePhotoLoopingCrossfadeDuration - In the implementation block
@property (assign,nonatomic) BOOL enablePlaybackDiagnostics;                                                       //@synthesize enablePlaybackDiagnostics=_enablePlaybackDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL stabilizeLivePhotos;                                                             //@synthesize stabilizeLivePhotos=_stabilizeLivePhotos - In the implementation block
@property (assign,nonatomic) double slideshowTriggerDelay;                                                         //@synthesize slideshowTriggerDelay=_slideshowTriggerDelay - In the implementation block
@property (assign,nonatomic) double slideshowIntervalDelay;                                                        //@synthesize slideshowIntervalDelay=_slideshowIntervalDelay - In the implementation block
@property (assign,nonatomic) double recentHighlightsTimeInterval;                                                  //@synthesize recentHighlightsTimeInterval=_recentHighlightsTimeInterval - In the implementation block
@property (assign,nonatomic) long long firstTimeExperienceMaxNonProcessedHighlights;                               //@synthesize firstTimeExperienceMaxNonProcessedHighlights=_firstTimeExperienceMaxNonProcessedHighlights - In the implementation block
@property (assign,nonatomic) long long firstTimeExperienceMaxNonProcessedAssets;                                   //@synthesize firstTimeExperienceMaxNonProcessedAssets=_firstTimeExperienceMaxNonProcessedAssets - In the implementation block
@property (assign,nonatomic) BOOL firstTimeExperienceAlwaysLogReadiness;                                           //@synthesize firstTimeExperienceAlwaysLogReadiness=_firstTimeExperienceAlwaysLogReadiness - In the implementation block
@property (assign,nonatomic) BOOL enbaleInteractiveTransition;                                                     //@synthesize enbaleInteractiveTransition=_enbaleInteractiveTransition - In the implementation block
@property (assign,nonatomic) double defaultZoomLevelTransitionAnimationDuration;                                   //@synthesize defaultZoomLevelTransitionAnimationDuration=_defaultZoomLevelTransitionAnimationDuration - In the implementation block
@property (assign,nonatomic) double defaultZoomLevelTransitionMaximumScaleAroundAnchor;                            //@synthesize defaultZoomLevelTransitionMaximumScaleAroundAnchor=_defaultZoomLevelTransitionMaximumScaleAroundAnchor - In the implementation block
@property (assign,nonatomic) double nonAnchorYearsFadeSpeed;                                                       //@synthesize nonAnchorYearsFadeSpeed=_nonAnchorYearsFadeSpeed - In the implementation block
@property (assign,nonatomic) double nonAnchorMonthsFadeSpeed;                                                      //@synthesize nonAnchorMonthsFadeSpeed=_nonAnchorMonthsFadeSpeed - In the implementation block
@property (assign,nonatomic) double nonAnchorDaysFadeSpeed;                                                        //@synthesize nonAnchorDaysFadeSpeed=_nonAnchorDaysFadeSpeed - In the implementation block
@property (assign,nonatomic) double transitionToOrFromAllPhotosAnimationDuration;                                  //@synthesize transitionToOrFromAllPhotosAnimationDuration=_transitionToOrFromAllPhotosAnimationDuration - In the implementation block
@property (assign,nonatomic) double transitionToOrFromAllPhotosScale;                                              //@synthesize transitionToOrFromAllPhotosScale=_transitionToOrFromAllPhotosScale - In the implementation block
@property (assign,nonatomic) double transitionScaleForDayNotMatchingMonths;                                        //@synthesize transitionScaleForDayNotMatchingMonths=_transitionScaleForDayNotMatchingMonths - In the implementation block
@property (assign,nonatomic) double zoomLevelPinchSignificantScaleDelta;                                           //@synthesize zoomLevelPinchSignificantScaleDelta=_zoomLevelPinchSignificantScaleDelta - In the implementation block
@property (assign,nonatomic) double swipeBackGestureMinAngle;                                                      //@synthesize swipeBackGestureMinAngle=_swipeBackGestureMinAngle - In the implementation block
@property (assign,nonatomic) double swipeBackGestureMinTranslation;                                                //@synthesize swipeBackGestureMinTranslation=_swipeBackGestureMinTranslation - In the implementation block
@property (assign,nonatomic) double zoomLevelControlSegmentExpansionFactor;                                        //@synthesize zoomLevelControlSegmentExpansionFactor=_zoomLevelControlSegmentExpansionFactor - In the implementation block
@property (assign,nonatomic) BOOL enableSnapshotMode;                                                              //@synthesize enableSnapshotMode=_enableSnapshotMode - In the implementation block
@property (assign,nonatomic) BOOL enableRecentlyEditedAlbum;                                                       //@synthesize enableRecentlyEditedAlbum=_enableRecentlyEditedAlbum - In the implementation block
@property (assign,nonatomic) BOOL exaggerateContrast;                                                              //@synthesize exaggerateContrast=_exaggerateContrast - In the implementation block
@property (assign,nonatomic) BOOL forceBadgesOnAllAssets;                                                          //@synthesize forceBadgesOnAllAssets=_forceBadgesOnAllAssets - In the implementation block
@property (assign,nonatomic) BOOL forceShowAllButtonsVisible;                                                      //@synthesize forceShowAllButtonsVisible=_forceShowAllButtonsVisible - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(BOOL)enableEmptyYearsMonthsDaysForTesting;
+(void)setEnableEmptyYearsMonthsDaysForTesting:(BOOL)arg1 ;
-(long long)version;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)useSaliency;
-(void)setUseSaliency:(BOOL)arg1 ;
-(long long)largeHeroDensity;
-(void)setLargeHeroDensity:(long long)arg1 ;
-(/*^block*/id)acceptableLargeHeroPredicate;
-(double)allowSpecialPanoHeaders;
-(void)setAllowSpecialPanoHeaders:(double)arg1 ;
-(BOOL)hideStatusFooterInSelectMode;
-(BOOL)allowsModularLayoutForZoomLevel:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 ;
-(double)recentHighlightsTimeInterval;
-(void)setRecentHighlightsTimeInterval:(double)arg1 ;
-(BOOL)enablePlayMovieInYears;
-(void)setEnablePlayMovieInYears:(BOOL)arg1 ;
-(BOOL)enableSlideshowInYears;
-(void)setEnableSlideshowInYears:(BOOL)arg1 ;
-(BOOL)launchToSavedAllPhotosScrollPosition;
-(void)setLaunchToSavedAllPhotosScrollPosition:(BOOL)arg1 ;
-(NSString *)savedAllPhotosScrollPositionAnchorAssetIdentifier;
-(void)setSavedAllPhotosScrollPositionAnchorAssetIdentifier:(NSString *)arg1 ;
-(BOOL)emulatesEmptyLibrary;
-(void)setEmulatesEmptyLibrary:(BOOL)arg1 ;
-(BOOL)showStatusBar;
-(void)setShowStatusBar:(BOOL)arg1 ;
-(BOOL)secondaryToolbarAlwaysVisible;
-(void)setSecondaryToolbarAlwaysVisible:(BOOL)arg1 ;
-(BOOL)alwaysShowSecondaryToolbarAtBottom;
-(void)setAlwaysShowSecondaryToolbarAtBottom:(BOOL)arg1 ;
-(double)bottomCenterSecondaryToolbarWidth;
-(void)setBottomCenterSecondaryToolbarWidth:(double)arg1 ;
-(BOOL)enableTapOnTitleToScroll;
-(void)setEnableTapOnTitleToScroll:(BOOL)arg1 ;
-(BOOL)enableCustomScrollToTopOrBottom;
-(void)setEnableCustomScrollToTopOrBottom:(BOOL)arg1 ;
-(double)scrollSnapMaximumDecelerationFactor;
-(void)setScrollSnapMaximumDecelerationFactor:(double)arg1 ;
-(double)scrollSnapMaximumAccelerationFactor;
-(void)setScrollSnapMaximumAccelerationFactor:(double)arg1 ;
-(double)scrollSnapMinimumSpeed;
-(void)setScrollSnapMinimumSpeed:(double)arg1 ;
-(double)floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
-(void)setFloatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom:(double)arg1 ;
-(double)floatingHeaderFadeOverDistance;
-(void)setFloatingHeaderFadeOverDistance:(double)arg1 ;
-(double)floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
-(void)setFloatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop:(double)arg1 ;
-(double)floatingHeaderButtonsFadeOverDistance;
-(void)setFloatingHeaderButtonsFadeOverDistance:(double)arg1 ;
-(double)floatingHeadersAppearanceCrossfadeDuration;
-(void)setFloatingHeadersAppearanceCrossfadeDuration:(double)arg1 ;
-(double)monthsFloatingHeadersDistanceFromSafeAreaTop;
-(void)setMonthsFloatingHeadersDistanceFromSafeAreaTop:(double)arg1 ;
-(double)monthsFloatingHeadersAppearanceCrossfadeStartDistance;
-(void)setMonthsFloatingHeadersAppearanceCrossfadeStartDistance:(double)arg1 ;
-(double)monthsFloatingHeadersAppearanceCrossfadeDistance;
-(void)setMonthsFloatingHeadersAppearanceCrossfadeDistance:(double)arg1 ;
-(double)monthsFloatingHeadersFadeoutDistance;
-(void)setMonthsFloatingHeadersFadeoutDistance:(double)arg1 ;
-(double)monthsFloatingHeadersSubtitleAlpha;
-(void)setMonthsFloatingHeadersSubtitleAlpha:(double)arg1 ;
-(double)monthsInlineHeadersFadeoutOffset;
-(void)setMonthsInlineHeadersFadeoutOffset:(double)arg1 ;
-(double)monthsInlineHeadersFadeoutDistance;
-(void)setMonthsInlineHeadersFadeoutDistance:(double)arg1 ;
-(double)monthsInlineHeadersFadeoutMinimumAlpha;
-(void)setMonthsInlineHeadersFadeoutMinimumAlpha:(double)arg1 ;
-(double)yearsHeadersFadeoutOffset;
-(void)setYearsHeadersFadeoutOffset:(double)arg1 ;
-(double)yearsHeadersFadeoutDistance;
-(void)setYearsHeadersFadeoutDistance:(double)arg1 ;
-(double)yearsHeadersFadeoutMinimumAlpha;
-(void)setYearsHeadersFadeoutMinimumAlpha:(double)arg1 ;
-(BOOL)showSaliencyRects;
-(void)setShowSaliencyRects:(BOOL)arg1 ;
-(double)largeHeroMinimumScore;
-(void)setLargeHeroMinimumScore:(double)arg1 ;
-(double)aspectRatioForCompactPortraitYears;
-(void)setAspectRatioForCompactPortraitYears:(double)arg1 ;
-(double)aspectRatioForCompactLandscapeYears;
-(void)setAspectRatioForCompactLandscapeYears:(double)arg1 ;
-(double)aspectRatioForRegularYears;
-(void)setAspectRatioForRegularYears:(double)arg1 ;
-(long long)forcedNumberOfYearsColumn;
-(void)setForcedNumberOfYearsColumn:(long long)arg1 ;
-(double)aspectRatioForCompactPortraitMonths;
-(void)setAspectRatioForCompactPortraitMonths:(double)arg1 ;
-(double)spacingBetweenDays;
-(void)setSpacingBetweenDays:(double)arg1 ;
-(double)interitemSpacingForDays;
-(void)setInteritemSpacingForDays:(double)arg1 ;
-(double)topInsetForVisibilityAnchoring;
-(void)setTopInsetForVisibilityAnchoring:(double)arg1 ;
-(double)sectionShadowOpacity;
-(void)setSectionShadowOpacity:(double)arg1 ;
-(double)skimmingScale;
-(void)setSkimmingScale:(double)arg1 ;
-(long long)sectionsToPrefetch;
-(void)setSectionsToPrefetch:(long long)arg1 ;
-(double)faultInDistance;
-(void)setFaultInDistance:(double)arg1 ;
-(double)faultOutPadding;
-(void)setFaultOutPadding:(double)arg1 ;
-(BOOL)hideStatusFooter;
-(void)setHideStatusFooter:(BOOL)arg1 ;
-(void)setHideStatusFooterInSelectMode:(BOOL)arg1 ;
-(BOOL)hideAnalyzingStatus;
-(void)setHideAnalyzingStatus:(BOOL)arg1 ;
-(BOOL)forceFloatingHeaderVisible;
-(void)setForceFloatingHeaderVisible:(BOOL)arg1 ;
-(BOOL)showDebugInformationInFloatingHeader;
-(void)setShowDebugInformationInFloatingHeader:(BOOL)arg1 ;
-(double)minimumVisibleHeightForTopMostSection;
-(void)setMinimumVisibleHeightForTopMostSection:(double)arg1 ;
-(BOOL)enableShowAllButtons;
-(void)setEnableShowAllButtons:(BOOL)arg1 ;
-(BOOL)allowsCustomDateTitles;
-(void)setAllowsCustomDateTitles:(BOOL)arg1 ;
-(double)yearsHeaderGradientAlpha;
-(void)setYearsHeaderGradientAlpha:(double)arg1 ;
-(double)yearsHeaderGradientHeight;
-(void)setYearsHeaderGradientHeight:(double)arg1 ;
-(double)monthsHeaderGradientAlpha;
-(void)setMonthsHeaderGradientAlpha:(double)arg1 ;
-(double)monthsHeaderGradientHeight;
-(void)setMonthsHeaderGradientHeight:(double)arg1 ;
-(double)monthsSmallHeaderGradientHeight;
-(void)setMonthsSmallHeaderGradientHeight:(double)arg1 ;
-(double)daysHeaderGradientAlpha;
-(void)setDaysHeaderGradientAlpha:(double)arg1 ;
-(double)daysHeaderGradientHeight;
-(void)setDaysHeaderGradientHeight:(double)arg1 ;
-(double)statusBarGradientAlpha;
-(void)setStatusBarGradientAlpha:(double)arg1 ;
-(double)statusBarGradientHeight;
-(void)setStatusBarGradientHeight:(double)arg1 ;
-(double)statusBarGradientAndStyleFadeDuration;
-(void)setStatusBarGradientAndStyleFadeDuration:(double)arg1 ;
-(long long)initialZoomLevel;
-(void)setInitialZoomLevel:(long long)arg1 ;
-(BOOL)showAllHighlights;
-(void)setShowAllHighlights:(BOOL)arg1 ;
-(BOOL)useCustomDaysCurationType;
-(void)setUseCustomDaysCurationType:(BOOL)arg1 ;
-(unsigned short)daysCurationType;
-(void)setDaysCurationType:(unsigned short)arg1 ;
-(double)nonInterestingPromotionScore;
-(void)setNonInterestingPromotionScore:(double)arg1 ;
-(BOOL)hideRecents;
-(void)setHideRecents:(BOOL)arg1 ;
-(BOOL)hideAggregations;
-(void)setHideAggregations:(BOOL)arg1 ;
-(BOOL)enableInlinePlayback;
-(void)setEnableInlinePlayback:(BOOL)arg1 ;
-(BOOL)forcePlayback;
-(void)setForcePlayback:(BOOL)arg1 ;
-(double)minAutoplaySuggestionScore;
-(void)setMinAutoplaySuggestionScore:(double)arg1 ;
-(BOOL)playBestTimeRange;
-(void)setPlayBestTimeRange:(BOOL)arg1 ;
-(long long)maxNumberOfPlayingItems;
-(void)setMaxNumberOfPlayingItems:(long long)arg1 ;
-(double)playbackVisibleRectEdgeInset;
-(void)setPlaybackVisibleRectEdgeInset:(double)arg1 ;
-(double)livePhotoLoopingCrossfadeDuration;
-(void)setLivePhotoLoopingCrossfadeDuration:(double)arg1 ;
-(BOOL)enablePlaybackDiagnostics;
-(void)setEnablePlaybackDiagnostics:(BOOL)arg1 ;
-(BOOL)stabilizeLivePhotos;
-(void)setStabilizeLivePhotos:(BOOL)arg1 ;
-(double)slideshowTriggerDelay;
-(void)setSlideshowTriggerDelay:(double)arg1 ;
-(double)slideshowIntervalDelay;
-(void)setSlideshowIntervalDelay:(double)arg1 ;
-(long long)firstTimeExperienceMaxNonProcessedHighlights;
-(void)setFirstTimeExperienceMaxNonProcessedHighlights:(long long)arg1 ;
-(long long)firstTimeExperienceMaxNonProcessedAssets;
-(void)setFirstTimeExperienceMaxNonProcessedAssets:(long long)arg1 ;
-(BOOL)firstTimeExperienceAlwaysLogReadiness;
-(void)setFirstTimeExperienceAlwaysLogReadiness:(BOOL)arg1 ;
-(BOOL)enbaleInteractiveTransition;
-(void)setEnbaleInteractiveTransition:(BOOL)arg1 ;
-(double)defaultZoomLevelTransitionAnimationDuration;
-(void)setDefaultZoomLevelTransitionAnimationDuration:(double)arg1 ;
-(double)defaultZoomLevelTransitionMaximumScaleAroundAnchor;
-(void)setDefaultZoomLevelTransitionMaximumScaleAroundAnchor:(double)arg1 ;
-(double)nonAnchorYearsFadeSpeed;
-(void)setNonAnchorYearsFadeSpeed:(double)arg1 ;
-(double)nonAnchorMonthsFadeSpeed;
-(void)setNonAnchorMonthsFadeSpeed:(double)arg1 ;
-(double)nonAnchorDaysFadeSpeed;
-(void)setNonAnchorDaysFadeSpeed:(double)arg1 ;
-(double)transitionToOrFromAllPhotosAnimationDuration;
-(void)setTransitionToOrFromAllPhotosAnimationDuration:(double)arg1 ;
-(double)transitionToOrFromAllPhotosScale;
-(void)setTransitionToOrFromAllPhotosScale:(double)arg1 ;
-(double)transitionScaleForDayNotMatchingMonths;
-(void)setTransitionScaleForDayNotMatchingMonths:(double)arg1 ;
-(double)zoomLevelPinchSignificantScaleDelta;
-(void)setZoomLevelPinchSignificantScaleDelta:(double)arg1 ;
-(double)swipeBackGestureMinAngle;
-(void)setSwipeBackGestureMinAngle:(double)arg1 ;
-(double)swipeBackGestureMinTranslation;
-(void)setSwipeBackGestureMinTranslation:(double)arg1 ;
-(double)zoomLevelControlSegmentExpansionFactor;
-(void)setZoomLevelControlSegmentExpansionFactor:(double)arg1 ;
-(BOOL)enableSnapshotMode;
-(void)setEnableSnapshotMode:(BOOL)arg1 ;
-(BOOL)enableRecentlyEditedAlbum;
-(void)setEnableRecentlyEditedAlbum:(BOOL)arg1 ;
-(BOOL)exaggerateContrast;
-(void)setExaggerateContrast:(BOOL)arg1 ;
-(BOOL)forceBadgesOnAllAssets;
-(void)setForceBadgesOnAllAssets:(BOOL)arg1 ;
-(BOOL)forceShowAllButtonsVisible;
-(void)setForceShowAllButtonsVisible:(BOOL)arg1 ;
@end

