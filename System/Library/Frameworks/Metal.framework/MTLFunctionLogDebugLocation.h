/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSURL;


@protocol MTLFunctionLogDebugLocation <NSObject>
@property (nonatomic,readonly) NSString * functionName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) unsigned long long line; 
@property (nonatomic,readonly) unsigned long long column; 
@required
-(NSURL *)URL;
-(unsigned long long)line;
-(unsigned long long)column;
-(NSString *)functionName;

@end

