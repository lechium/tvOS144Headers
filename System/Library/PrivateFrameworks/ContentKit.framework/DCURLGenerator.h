/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DCURLGenerator : NSObject

@property (nonatomic,readonly) NSString * scheme; 
@property (nonatomic,readonly) NSString * host; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * query; 
-(NSString *)scheme;
-(NSString *)host;
-(NSString *)query;
-(id)URL;
-(NSString *)path;
@end

