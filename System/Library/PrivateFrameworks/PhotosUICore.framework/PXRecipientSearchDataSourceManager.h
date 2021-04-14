/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXRecipientSearchDataSource;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager {

	NSString* _queryString;
	unsigned long long _searchState;

}

@property (assign,nonatomic) unsigned long long searchState;                          //@synthesize searchState=_searchState - In the implementation block
@property (nonatomic,readonly) PXRecipientSearchDataSource * dataSource; 
@property (nonatomic,copy) NSString * queryString;                                    //@synthesize queryString=_queryString - In the implementation block
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(unsigned long long)searchState;
-(void)queryStringDidChange;
-(void)setSearchState:(unsigned long long)arg1 ;
@end

