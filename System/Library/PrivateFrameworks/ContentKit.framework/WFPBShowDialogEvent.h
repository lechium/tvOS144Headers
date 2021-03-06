/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBShowDialogEvent : PBCodable <NSCopying> {

	NSString* _automationType;
	NSString* _dialogType;
	NSString* _dismissalType;
	NSString* _key;
	NSString* _presentationStyle;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasDialogType; 
@property (nonatomic,retain) NSString * dialogType;                     //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentationStyle; 
@property (nonatomic,retain) NSString * presentationStyle;              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissalType; 
@property (nonatomic,retain) NSString * dismissalType;                  //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                 //@synthesize automationType=_automationType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)presentationStyle;
-(void)setPresentationStyle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(NSString *)dialogType;
-(void)setDialogType:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(BOOL)hasDialogType;
-(BOOL)hasPresentationStyle;
-(BOOL)hasDismissalType;
-(BOOL)hasAutomationType;
-(NSString *)dismissalType;
-(void)setDismissalType:(NSString *)arg1 ;
@end

