/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNEspressoResources : NSObject {

	SCD_Struct_VN58* _network;
	void* _plan;
	void* _context;
	NSString* _modelName;

}

@property (readonly) SCD_Struct_VN58* network;              //@synthesize network=_network - In the implementation block
@property (readonly) void* plan;                            //@synthesize plan=_plan - In the implementation block
@property (readonly) void* context;                         //@synthesize context=_context - In the implementation block
@property (readonly) NSString * modelName;                  //@synthesize modelName=_modelName - In the implementation block
-(id)description;
-(void)dealloc;
-(void*)context;
-(SCD_Struct_VN58*)network;
-(void*)plan;
-(void)free;
-(NSString *)modelName;
-(id)initWithModelName:(id)arg1 network:(SCD_Struct_VN58*)arg2 plan:(void*)arg3 context:(void*)arg4 ;
@end

