/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFOfflineCache.h>

@class NSString;

@interface MFDAOfflineCache : MFOfflineCache {

	NSString* _lastSelectedFolderID;

}
-(void)dealloc;
-(void)deferOperation:(id)arg1 ;
-(void)setLastSelectedMailbox:(id)arg1 ;
-(BOOL)replayOperationsUsingBlock:(/*^block*/id)arg1 ;
-(void)deleteOfflineCacheData;
@end

