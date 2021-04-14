/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, SAUIAudioDescription, NSString;

@interface SAUIAudioData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * audioBuffer; 
@property (nonatomic,retain) SAUIAudioDescription * decoderStreamDescription; 
@property (nonatomic,retain) SAUIAudioDescription * playerStreamDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioData;
+(id)audioDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAudioDescription *)decoderStreamDescription;
-(void)setDecoderStreamDescription:(SAUIAudioDescription *)arg1 ;
-(SAUIAudioDescription *)playerStreamDescription;
-(void)setPlayerStreamDescription:(SAUIAudioDescription *)arg1 ;
-(NSData *)audioBuffer;
-(void)setAudioBuffer:(NSData *)arg1 ;
@end

