/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol INPersonHandleExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * label; 
@required
-(id)init;
-(void)setType:(long long)arg1;
-(long long)type;
-(NSString *)value;
-(void)setValue:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

