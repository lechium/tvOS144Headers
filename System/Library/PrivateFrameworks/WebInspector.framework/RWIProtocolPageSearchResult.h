/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * frameId; 
@property (assign,nonatomic) double matchesCount; 
@property (nonatomic,copy) NSString * requestId; 
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)requestId;
-(double)matchesCount;
-(void)setRequestId:(NSString *)arg1 ;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setMatchesCount:(double)arg1 ;
-(id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3 ;
@end

