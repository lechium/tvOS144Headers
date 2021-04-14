/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying> {

	NSDictionary* _actionDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * actionDictionary;              //@synthesize actionDictionary=_actionDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * buyParams; 
@property (nonatomic,copy,readonly) NSString * itemName; 
@property (nonatomic,copy,readonly) NSString * subtarget; 
@property (nonatomic,copy,readonly) NSString * URLString; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)kind;
-(NSString *)buyParams;
-(NSString *)URLString;
-(NSString *)itemName;
-(NSString *)subtarget;
-(id)initWithResponseButtonActionDictionary:(id)arg1 ;
-(NSDictionary *)actionDictionary;
@end
