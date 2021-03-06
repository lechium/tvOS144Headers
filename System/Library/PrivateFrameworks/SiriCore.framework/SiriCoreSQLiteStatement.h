/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreSQLiteStatement : NSObject {

	sqlite3_stmtRef _impl;
	BOOL _finalizeWhenDone;

}
-(void)dealloc;
-(void)reset;
-(sqlite3_stmtRef)impl;
-(void)clearBindings;
-(id)initWithImpl:(sqlite3_stmtRef)arg1 finalizeWhenDone:(BOOL)arg2 ;
@end

