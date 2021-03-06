/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ML3DatabaseStatementRenderer : NSObject
+(id)defaultRenderer;
-(id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2 ;
-(id)insertStatementWithOptions:(id)arg1 ;
-(id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg1 ;
-(id)rollbackTranscationStatementToSavepointName:(id)arg1 ;
-(id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1 ;
-(id)commitTransactionStatement;
-(id)rollbackTranscationStatement;
-(id)savepointStatementWithName:(id)arg1 ;
-(id)savepointReleaseStatementWithName:(id)arg1 ;
@end

