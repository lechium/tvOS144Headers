/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libMemoryResourceException.dylib/FPUserProcess.h>

@interface FPCorpseProcess : FPUserProcess
-(BOOL)_isAlive;
-(id)initWithCorpse:(unsigned)arg1 pid:(int)arg2 name:(id)arg3 dirtyFlags:(unsigned)arg4 procFlags:(unsigned)arg5 ;
-(void)addLedgerData:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_populateTask;
-(void)_gatherIdleExitStatus;
-(id)_gatherOwnedVmObjects;
@end

