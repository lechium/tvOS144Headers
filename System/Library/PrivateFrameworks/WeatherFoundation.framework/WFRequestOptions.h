/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface WFRequestOptions : NSObject {

	NSMutableDictionary* _httpHeaderDictionary;

}

@property (nonatomic,readonly) NSMutableDictionary * httpHeaderDictionary;              //@synthesize httpHeaderDictionary=_httpHeaderDictionary - In the implementation block
-(void)addHttpHeaderField:(id)arg1 withValue:(id)arg2 ;
-(NSMutableDictionary *)httpHeaderDictionary;
@end

