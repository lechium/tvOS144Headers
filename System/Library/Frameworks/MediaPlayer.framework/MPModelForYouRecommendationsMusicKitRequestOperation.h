/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sectionProperties;
-(id)itemProperties;
-(id)_recommendationGroupBuilder;
-(id)_recommendationGroupBuilderWithFlatSectionedItems:(id)arg1 ;
-(id)_produceResultsWithItemsArray:(id)arg1 ;
-(id)_produceResultsWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2 ;
-(id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2 ;
-(id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2 ;
-(id)queryItemsWithStoreBagDictionary:(id)arg1 ;
-(id)recommendationsURLWithStoreBagDictionary:(id)arg1 ;
-(id)recentlyPlayedURLWithStoreBagDictionary:(id)arg1 ;
-(BOOL)isOnboardingRequired:(id)arg1 ;
-(id)typesArrayWithTypes:(long long)arg1 ;
-(id)displayFilterKindsValueForOptions:(long long)arg1 ;
@end

