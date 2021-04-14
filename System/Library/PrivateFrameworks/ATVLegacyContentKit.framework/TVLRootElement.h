/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLDocument, NSString, NSURL;

@interface TVLRootElement : TVLElement {

	TVLDocument* _feedDocument;
	BOOL _isVolatile;
	float _refreshInterval;
	NSString* _onVolatileReload;
	NSURL* _originalURL;
	NSString* _onRefresh;

}

@property (assign,nonatomic) BOOL isVolatile;                        //@synthesize isVolatile=_isVolatile - In the implementation block
@property (nonatomic,copy) NSString * onVolatileReload;              //@synthesize onVolatileReload=_onVolatileReload - In the implementation block
@property (nonatomic,retain) NSURL * originalURL;                    //@synthesize originalURL=_originalURL - In the implementation block
@property (assign,nonatomic) float refreshInterval;                  //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,copy) NSString * onRefresh;                     //@synthesize onRefresh=_onRefresh - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isVolatile;
-(float)refreshInterval;
-(void)setRefreshInterval:(float)arg1 ;
-(NSURL *)originalURL;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(id)feedDocument;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setIsVolatile:(BOOL)arg1 ;
-(void)setOnVolatileReload:(NSString *)arg1 ;
-(void)setOnRefresh:(NSString *)arg1 ;
-(NSString *)onVolatileReload;
-(NSString *)onRefresh;
@end

