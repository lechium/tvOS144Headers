/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol REElementDataSourceControllerProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) Class dataSourceClass; 
@property (nonatomic,readonly) NSArray * supportedSections; 
@property (nonatomic,readonly) NSArray * allProvidedElements; 
@property (nonatomic,readonly) BOOL allowsLocationUse; 
@property (nonatomic,readonly) BOOL hasDataAvailable; 
@property (nonatomic,readonly) unsigned long long updateCount; 
@required
-(NSString *)name;
-(unsigned long long)updateCount;
-(Class)dataSourceClass;
-(NSArray *)supportedSections;
-(BOOL)allowsLocationUse;
-(BOOL)hasDataAvailable;
-(NSArray *)allProvidedElements;

@end

