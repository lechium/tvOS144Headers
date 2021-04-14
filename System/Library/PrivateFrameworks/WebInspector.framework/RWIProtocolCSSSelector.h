/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * specificity; 
@property (assign,nonatomic) BOOL dynamic; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)dynamic;
-(void)setSpecificity:(NSArray *)arg1 ;
-(NSArray *)specificity;
@end

