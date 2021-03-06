/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libprequelite.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
@class NSMutableArray;

@interface PQLStatement : NSObject {

	sqlite3_stmtRef _stmt;
	PQLStatement* _next;
	NSMutableArray* _aliveBinds;
	/*^block*/id _profilingHook;
	SCD_Union_PQ4* _specUnion;
	BOOL _inUse;
	BOOL _isTraced;
	short _specLength;

}

@property (nonatomic,readonly) BOOL isTraced; 
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 db:(id)arg3 cache:(cache_sRef)arg4 ;
-(void)unbindForDB:(id)arg1 returnedRows:(unsigned long long)arg2 ;
-(BOOL)isTraced;
-(id)initWithQueryBuilder:(/*^block*/id)arg1 db:(id)arg2 cache:(cache_sRef)arg3 ;
-(BOOL)_prepare:(const char*)arg1 withDB:(id)arg2 ;
-(id)translate:(id)arg1 hasInjections:(BOOL*)arg2 arguments:(char*)arg3 ;
-(id)initWithStatement:(id)arg1 forDB:(id)arg2 ;
-(void)bindArguments:(char*)arg1 db:(id)arg2 ;
-(void)keepBindAlive:(id)arg1 ;
-(id)translate:(id)arg1 withBuilder:(id)arg2 ;
-(void)bindFromArray:(id)arg1 db:(id)arg2 ;
@end

