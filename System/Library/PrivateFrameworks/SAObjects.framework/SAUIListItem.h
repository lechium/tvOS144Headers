/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIListItem : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * imageType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelValue; 
@property (nonatomic,retain) id<SAAceSerializable> object; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * selectionText; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * title; 
+(id)listItem;
+(id)listItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setObject:(id<SAAceSerializable>)arg1 ;
-(id<SAAceSerializable>)object;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)imageType;
-(void)setImageType:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)labelValue;
-(void)setLabelValue:(NSString *)arg1 ;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)selectionText;
-(void)setSelectionText:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
@end

