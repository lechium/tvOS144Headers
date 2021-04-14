/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSString, NSCachedFetchRequestInfo;

@interface NSSQLiteStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	BOOL _isImpossibleCondition;
	BOOL _trackChangedRowCount;
	NSSQLEntity* _fakeEntityForFetch;
	NSCachedFetchRequestInfo* _cachedStatementInfo;
	sqlite3_stmtRef _cachedSQLiteStatement;
	void* _owner;

}

@property (nonatomic,retain) NSCachedFetchRequestInfo * cachedStatementInfo;              //@synthesize cachedStatementInfo=_cachedStatementInfo - In the implementation block
@property (assign,nonatomic) BOOL trackChangedRowCount;                                   //@synthesize trackChangedRowCount=_trackChangedRowCount - In the implementation block
-(id)description;
-(void)dealloc;
-(id)entity;
-(id)fakeEntityForFetch;
-(BOOL)isReadOnly;
-(id)sqlString;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)clearCaches:(BOOL)arg1 ;
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(unsigned)addBindVariable:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(void)setImpossibleCondition:(BOOL)arg1 ;
-(void)setSQLString:(id)arg1 ;
-(void)setBindIntarrays:(id)arg1 ;
-(void)setBindVariables:(id)arg1 ;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg1 ;
-(id)bindVariables;
-(BOOL)isImpossibleCondition;
-(void)setTrackChangedRowCount:(BOOL)arg1 ;
-(id)bindIntarrays;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 forConnection:(id)arg2 ;
-(void)removeAllBindVariables;
-(unsigned)addBindIntarray:(id)arg1 ;
-(void)removeAllBindIntarrays;
-(NSCachedFetchRequestInfo *)cachedStatementInfo;
-(BOOL)trackChangedRowCount;
@end

