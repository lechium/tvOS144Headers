/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXPerforming;
@class NSString;

@interface SVXModule : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	Class _instanceClass;
	id<SVXPerforming> _performer;

}

@property (assign,nonatomic) BOOL isActive;                              //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) Class instanceClass;                      //@synthesize instanceClass=_instanceClass - In the implementation block
@property (nonatomic,readonly) id<SVXPerforming> performer;              //@synthesize performer=_performer - In the implementation block
-(id)description;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(id<SVXPerforming>)performer;
-(id)initWithIdentifier:(id)arg1 instanceClass:(Class)arg2 performer:(id)arg3 ;
-(Class)instanceClass;
@end

