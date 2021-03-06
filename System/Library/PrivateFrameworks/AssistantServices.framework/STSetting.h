/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@interface STSetting : STSiriModelObject {

	long long _type;
	id _value;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;                    //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

