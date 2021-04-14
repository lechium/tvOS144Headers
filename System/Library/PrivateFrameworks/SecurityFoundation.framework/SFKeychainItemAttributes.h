/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol SFKeychainItemAttributes <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
@required
-(NSString *)localizedDescription;
-(NSString *)persistentIdentifier;
-(void)setLocalizedDescription:(id)arg1;
-(NSString *)localizedLabel;
-(void)setLocalizedLabel:(id)arg1;

@end
