/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class NSString, SAUINanoImageResource;

@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,copy) NSString * attributionPosition; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributionItem;
+(id)attributionItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)encodedClassName;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(NSString *)attributionPosition;
-(void)setAttributionPosition:(NSString *)arg1 ;
@end

