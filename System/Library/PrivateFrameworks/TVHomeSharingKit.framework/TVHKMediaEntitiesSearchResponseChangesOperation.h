/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class TVHKMediaEntitiesSearchResponseChanges, NSError, TVHKMediaEntitiesSearchResponse;

@interface TVHKMediaEntitiesSearchResponseChangesOperation : NSOperation {

	TVHKMediaEntitiesSearchResponseChanges* _responseChanges;
	NSError* _error;
	TVHKMediaEntitiesSearchResponse* _latestResponse;
	TVHKMediaEntitiesSearchResponse* _currentResponse;

}

@property (nonatomic,retain) TVHKMediaEntitiesSearchResponseChanges * responseChanges;              //@synthesize responseChanges=_responseChanges - In the implementation block
@property (nonatomic,copy) NSError * error;                                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesSearchResponse * latestResponse;                      //@synthesize latestResponse=_latestResponse - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesSearchResponse * currentResponse;                     //@synthesize currentResponse=_currentResponse - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)main;
-(TVHKMediaEntitiesSearchResponse *)currentResponse;
-(void)setCurrentResponse:(TVHKMediaEntitiesSearchResponse *)arg1 ;
-(void)setResponseChanges:(TVHKMediaEntitiesSearchResponseChanges *)arg1 ;
-(id)initWithLatestResponse:(id)arg1 currentResponse:(id)arg2 ;
-(TVHKMediaEntitiesSearchResponseChanges *)responseChanges;
-(void)_preloadMediaEntityProperties;
-(TVHKMediaEntitiesSearchResponse *)latestResponse;
-(void)_preloadPropertiesForResponse:(id)arg1 ;
-(void)_preloadPropertiesForMediaEntities:(id)arg1 ;
-(void)setLatestResponse:(TVHKMediaEntitiesSearchResponse *)arg1 ;
@end

