/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PGUserDefaults : NSObject
+(void)initialize;
+(unsigned long long)minimumNumberOfCuratedAssetsForInterestingMoments;
+(unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+(BOOL)isMemoriesNotificationDisabled;
+(BOOL)isMemoriesLivingOnFeedbackEnabled;
+(BOOL)suppressGraphLiveUpdate;
+(id)extendedCurationOptions;
+(void)setExtendedCurationOptions:(id)arg1 ;
+(unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+(double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+(unsigned long long)maximumNumberOfTextFeaturesPerEvent;
+(BOOL)boundTextFeaturesPerEvent;
+(void)_registerDefaults;
+(BOOL)useExtendedCurationAssetCountForLocationTitles;
+(BOOL)isShowingHolidayCalendarEvents;
+(BOOL)isAlwaysShowingHolidayCalendarEvents;
+(BOOL)isAutonamingDisabled;
+(BOOL)isAutonamingSignalPropertiesIngestAllowed;
+(BOOL)isAutonamingFilteredOutInferencesIngestAllowed;
+(BOOL)isRelationshipInferenceDisabled;
+(BOOL)isRelationshipSignalPropertiesIngestAllowed;
+(BOOL)isRelationshipFilteredOutInferencesIngestAllowed;
+(BOOL)isPublicEventsEnabled;
+(BOOL)peopleSuggestionLearningIsEnabled;
+(BOOL)onThisDayHighlightKeyAssetRotationIsEnabled;
+(BOOL)isBehavioralCurationEnabled;
+(BOOL)isPhotosChallengeEnabled;
+(unsigned long long)maximumNumberOfVisibleRegularItems;
+(unsigned long long)maximumNumberOfVisibleItems;
+(unsigned long long)minimumNumberOfVisibleItems;
@end

