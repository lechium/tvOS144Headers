/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSString, NSUUID, NSObject;

@interface LASSProperties4RB : NSObject {

	int _requestedJetsamPriority;
	NSString* _label;
	NSUUID* _instance;
	NSObject*<OS_xpc_object> _additionalProperties;
	NSString* _program;

}

@property (nonatomic,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSUUID * instance;                                          //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) int requestedJetsamPriority;                                //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (nonatomic,readonly) NSString * program;                                         //@synthesize program=_program - In the implementation block
+(id)_propertiesFromAttrs:(id)arg1 ;
+(id)propertiesForPid:(int)arg1 error:(id*)arg2 ;
+(id)propertiesForJob:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_xpc_object>)additionalProperties;
-(NSUUID *)instance;
-(NSString *)label;
-(NSString *)program;
-(id)initWithLabel:(id)arg1 instance:(id)arg2 requestedJetsamPriority:(int)arg3 additionalProperties:(id)arg4 program:(id)arg5 ;
-(int)requestedJetsamPriority;
@end

