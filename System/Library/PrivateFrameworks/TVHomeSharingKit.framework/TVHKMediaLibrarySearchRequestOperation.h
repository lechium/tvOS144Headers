/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryOperation.h>

@class TVHKMediaEntitiesSearchResponse, TVHKMediaEntitiesSearchRequest;

@interface TVHKMediaLibrarySearchRequestOperation : TVHKMediaLibraryOperation {

	TVHKMediaEntitiesSearchResponse* _response;
	TVHKMediaEntitiesSearchRequest* _request;

}

@property (nonatomic,retain) TVHKMediaEntitiesSearchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) TVHKMediaEntitiesSearchRequest * request;                  //@synthesize request=_request - In the implementation block
-(TVHKMediaEntitiesSearchRequest *)request;
-(void)setResponse:(TVHKMediaEntitiesSearchResponse *)arg1 ;
-(TVHKMediaEntitiesSearchResponse *)response;
-(void)setRequest:(TVHKMediaEntitiesSearchRequest *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 request:(id)arg2 ;
@end

