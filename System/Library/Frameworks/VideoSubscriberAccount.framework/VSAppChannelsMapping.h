/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject {

	NSString* _appAdamID;
	NSArray* _channelIDs;

}

@property (nonatomic,copy) NSString * appAdamID;              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSArray * channelIDs;              //@synthesize channelIDs=_channelIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appAdamID;
-(void)setAppAdamID:(NSString *)arg1 ;
-(NSArray *)channelIDs;
-(void)setChannelIDs:(NSArray *)arg1 ;
@end

