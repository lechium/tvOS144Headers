/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AutoEditLib.PipelineController : NSObject <NSCopying> {

	 collection;
	 memory;
	 moodService;
	 queue;
	 memoryPublisherOutput;
	 blueprint;
	 picklistPublisherOutput;
	 downloadPublisherOutput;
	 durationRangePublisherOutput;
	 durationPublisherOutput;
	 freezeRangesToPersist;
	 token;
	 secondToken;

}
-(id)copyWithZone:(void*)arg1 ;
-(id)init;
-(void)cancel;
-(void)persist;
-(id)initWithCollection:(id)arg1 memory:(id)arg2 highlight:(id)arg3 moodService:(id)arg4 queue:(id)arg5 ;
-(void)receiveWithRequestedDuration:(double)arg1 requestedKeyAsset:(id)arg2 requestedBlueprint:(id)arg3 requestedSuggestions:(id)arg4 requestedTitle:(id)arg5 requestedSubtitle:(id)arg6 fullPicklist:(id)arg7 naturalSize:(CGSize)arg8 fetchedAssets:(id)arg9 isAvocado:(BOOL)arg10 progressHandler:(/*^block*/id)arg11 completionHandler:(/*^block*/id)arg12 ;
@end

