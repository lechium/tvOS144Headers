/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray;

@interface IKDialogTemplate : IKViewElement

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) NSArray * buttons; 
-(unsigned long long)type;
-(IKTextElement *)title;
-(NSArray *)buttons;
-(IKTextElement *)descriptionText;
@end
