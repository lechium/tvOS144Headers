/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXClientInfoMutating.h>

@class SVXClientInfo, NSString;

@interface _SVXClientInfoMutation : NSObject <SVXClientInfoMutating> {

	SVXClientInfo* _baseModel;
	int _processIdentifier;
	NSString* _processName;
	struct {
		unsigned isDirty : 1;
		unsigned hasProcessIdentifier : 1;
		unsigned hasProcessName : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setProcessName:(id)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

