/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary;

@interface EDAMPreferences : FATObject {

	NSNumber* _updateSequenceNum;
	NSDictionary* _preferences;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSDictionary * preferences;                //@synthesize preferences=_preferences - In the implementation block
+(id)structName;
+(id)structFields;
-(NSDictionary *)preferences;
-(void)setPreferences:(NSDictionary *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end

