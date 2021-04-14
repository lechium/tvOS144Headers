/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet, NSArray;


@protocol REDataSourceManagerProperties <REExportedInterface>
@property (nonatomic,readonly) NSSet * disabledDataSources; 
@property (readonly) NSSet * availableDataSourceIdentifiers; 
@property (readonly) NSSet * currentDataSourceIdentifiers; 
@property (readonly) NSArray * currentDataSources; 
@property (nonatomic,readonly) NSArray * dataSourceControllers; 
@required
-(NSSet *)currentDataSourceIdentifiers;
-(NSSet *)availableDataSourceIdentifiers;
-(NSSet *)disabledDataSources;
-(NSArray *)currentDataSources;
-(NSArray *)dataSourceControllers;

@end
