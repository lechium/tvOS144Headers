/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MPFrameManager : NSObject {

	NSMutableDictionary* mFrames;
	NSMutableDictionary* mCategories;

}
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)loadFrameManagerWithPaths:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)versionOfFrameID:(id)arg1 ;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)allCategoryIDs;
-(id)attributesForFrameID:(id)arg1 andPresetID:(id)arg2 ;
-(id)categoryIDsForFrameID:(id)arg1 ;
-(id)framesForCategoryID:(id)arg1 ;
-(id)allFrameIDs;
-(id)localizedFrameNameForFrameID:(id)arg1 ;
-(id)descriptionForFrameID:(id)arg1 ;
-(id)randomFrameFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)constraintsForFramesMatchingList:(id)arg1 andCriteria:(id)arg2 ;
@end

