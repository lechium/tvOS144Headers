/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface TPStringTable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _table;

}

@property (readonly) unsigned long long _count; 
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSHashTable * table;                             //@synthesize table=_table - In the implementation block
+(id)defaultTable;
-(unsigned long long)_count;
-(id)setWithArray:(id)arg1 ;
-(id)stringWithString:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)table;
-(void)setTable:(NSHashTable *)arg1 ;
@end

