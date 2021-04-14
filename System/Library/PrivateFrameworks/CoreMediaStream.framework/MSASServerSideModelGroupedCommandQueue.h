/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMediaStream/MSASGroupedQueue.h>

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {

	MSASEnqueuedCommand* _lastEnqueuedCommand;

}

@property (nonatomic,retain) MSASEnqueuedCommand * lastEnqueuedCommand;              //@synthesize lastEnqueuedCommand=_lastEnqueuedCommand - In the implementation block
+(/*^block*/id)calloutBlockForCommand:(id)arg1 ;
-(BOOL)hasEnqueuedItems;
-(void)flushQueue;
-(void)workQueueFlushQueue;
-(void)workQueueEnqueueCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3 ;
-(void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 ;
-(MSASEnqueuedCommand *)lastEnqueuedCommand;
-(void)setLastEnqueuedCommand:(MSASEnqueuedCommand *)arg1 ;
@end

