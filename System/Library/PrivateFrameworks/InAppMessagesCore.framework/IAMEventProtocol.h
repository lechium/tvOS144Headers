/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol IAMEventProtocol <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@optional
-(NSString *)source;
-(id)value;
-(NSDictionary *)payload;

@required
-(NSString *)name;
-(long long)type;
-(BOOL)matchesWithKey:(id)arg1;

@end
