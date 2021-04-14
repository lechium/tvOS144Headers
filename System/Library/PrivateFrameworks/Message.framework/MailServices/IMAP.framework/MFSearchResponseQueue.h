/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/MFBaseSyncResponseQueue.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {

	NSMutableIndexSet* indexSet;
	unsigned limit;

}

@property (nonatomic,retain,readonly) NSIndexSet * indexSet; 
-(id)init;
-(void)dealloc;
-(NSIndexSet *)indexSet;
-(BOOL)addItem:(id)arg1 ;
-(BOOL)flush;
-(unsigned long long)uidForItem:(id)arg1 ;
-(unsigned long long)flagsForItem:(id)arg1 ;
@end

