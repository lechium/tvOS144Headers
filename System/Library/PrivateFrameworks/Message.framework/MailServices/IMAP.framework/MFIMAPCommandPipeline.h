/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface MFIMAPCommandPipeline : NSObject {

	unsigned long long _chunkSize;
	unsigned long long _expectedSize;
	unsigned _full : 1;
	unsigned _sending : 1;
	NSMutableArray* _fetchUnits;

}
-(void)dealloc;
-(BOOL)isFull;
-(void)setFull:(BOOL)arg1 ;
-(unsigned long long)expectedSize;
-(void)_removeFetchUnitMatchingResponse:(id)arg1 ;
-(void)addFetchCommandForUid:(unsigned)arg1 fetchItem:(id)arg2 expectedLength:(unsigned long long)arg3 bodyDataConsumer:(id)arg4 consumerSection:(id)arg5 ;
-(void)setChunkSize:(unsigned long long)arg1 ;
-(unsigned long long)chunkSize;
-(id)failureResponsesFromSendingCommandsWithConnection:(id)arg1 ;
-(BOOL)isSending;
@end

