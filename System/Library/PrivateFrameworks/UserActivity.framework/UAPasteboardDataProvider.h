/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UAPasteboardItemProviding.h>

@class NSString, NSUUID, NSData;

@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding> {

	NSString* _type;
	NSUUID* _uuid;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setType:(NSString *)arg1 ;
-(NSData *)data;
-(NSString *)type;
-(void)setData:(NSData *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 type:(id)arg2 ;
@end

