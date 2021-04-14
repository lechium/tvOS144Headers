/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {

	NSMutableSet* _processes;
	unsigned long long _hashValue;

}

@property (nonatomic,retain) NSMutableSet * processes;                  //@synthesize processes=_processes - In the implementation block
@property (assign,nonatomic) unsigned long long hashValue;              //@synthesize hashValue=_hashValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)hashValue;
-(id)immutableCopy;
-(NSMutableSet *)processes;
-(void)setHashValue:(unsigned long long)arg1 ;
-(void)addProcess:(id)arg1 ;
-(void)setProcesses:(NSMutableSet *)arg1 ;
@end

