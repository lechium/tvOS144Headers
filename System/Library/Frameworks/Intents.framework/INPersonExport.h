/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;


@protocol INPersonExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) INPersonHandle * personHandle; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,copy) NSArray * aliases; 
@property (assign,nonatomic) long long suggestionType; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,copy) NSArray * alternatives; 
@required
-(id)init;
-(NSString *)handle;
-(NSString *)displayName;
-(NSString *)contactIdentifier;
-(NSString *)relationship;
-(void)setDisplayName:(id)arg1;
-(INImage *)image;
-(void)setImage:(id)arg1;
-(void)setHandle:(id)arg1;
-(void)setSuggestionType:(long long)arg1;
-(long long)suggestionType;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1;
-(void)setContactIdentifier:(id)arg1;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(id)arg1;
-(NSArray *)alternatives;
-(void)setAlternatives:(id)arg1;
-(NSArray *)aliases;
-(void)setAliases:(id)arg1;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(id)arg1;
-(void)setRelationship:(id)arg1;
-(INPersonHandle *)personHandle;
-(void)setPersonHandle:(id)arg1;

@end

