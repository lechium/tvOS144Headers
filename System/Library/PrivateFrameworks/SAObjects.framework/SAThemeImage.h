/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSData;

@interface SAThemeImage : SADomainObject

@property (nonatomic,copy) NSString * appearanceSetting; 
@property (nonatomic,copy) NSData * dynamicImage; 
+(id)themeImage;
+(id)themeImageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)appearanceSetting;
-(void)setAppearanceSetting:(NSString *)arg1 ;
-(NSData *)dynamicImage;
-(void)setDynamicImage:(NSData *)arg1 ;
@end

