/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(id)updateColumnsIntermediate;
@end
