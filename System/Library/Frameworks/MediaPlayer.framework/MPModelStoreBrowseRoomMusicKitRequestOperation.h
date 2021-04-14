/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSIndexSet, NSDictionary;

@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSIndexSet* _whitelistedFCKinds;
	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3 ;
-(id)roomURLWithRoomID:(id)arg1 storeBagDictionary:(id)arg2 ;
@end

