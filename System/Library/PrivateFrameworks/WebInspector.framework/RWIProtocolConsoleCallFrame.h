/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(int)lineNumber;
-(int)columnNumber;
-(NSString *)functionName;
-(void)setLineNumber:(int)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setScriptId:(NSString *)arg1 ;
-(void)setColumnNumber:(int)arg1 ;
-(id)initWithFunctionName:(id)arg1 url:(id)arg2 scriptId:(id)arg3 lineNumber:(int)arg4 columnNumber:(int)arg5 ;
-(NSString *)scriptId;
@end

