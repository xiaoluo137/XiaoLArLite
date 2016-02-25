// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME myana_recombinationDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "ChargeCal.h"
#include "TunedEdX.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *larlitecLcLChargeCal_Dictionary();
   static void larlitecLcLChargeCal_TClassManip(TClass*);
   static void *new_larlitecLcLChargeCal(void *p = 0);
   static void *newArray_larlitecLcLChargeCal(Long_t size, void *p);
   static void delete_larlitecLcLChargeCal(void *p);
   static void deleteArray_larlitecLcLChargeCal(void *p);
   static void destruct_larlitecLcLChargeCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ChargeCal*)
   {
      ::larlite::ChargeCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ChargeCal));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ChargeCal", "ChargeCal.h", 25,
                  typeid(::larlite::ChargeCal), DefineBehavior(ptr, ptr),
                  &larlitecLcLChargeCal_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ChargeCal) );
      instance.SetNew(&new_larlitecLcLChargeCal);
      instance.SetNewArray(&newArray_larlitecLcLChargeCal);
      instance.SetDelete(&delete_larlitecLcLChargeCal);
      instance.SetDeleteArray(&deleteArray_larlitecLcLChargeCal);
      instance.SetDestructor(&destruct_larlitecLcLChargeCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ChargeCal*)
   {
      return GenerateInitInstanceLocal((::larlite::ChargeCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ChargeCal*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLChargeCal_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ChargeCal*)0x0)->GetClass();
      larlitecLcLChargeCal_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLChargeCal_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLTunedEdX_Dictionary();
   static void larlitecLcLTunedEdX_TClassManip(TClass*);
   static void *new_larlitecLcLTunedEdX(void *p = 0);
   static void *newArray_larlitecLcLTunedEdX(Long_t size, void *p);
   static void delete_larlitecLcLTunedEdX(void *p);
   static void deleteArray_larlitecLcLTunedEdX(void *p);
   static void destruct_larlitecLcLTunedEdX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::TunedEdX*)
   {
      ::larlite::TunedEdX *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::TunedEdX));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::TunedEdX", "TunedEdX.h", 26,
                  typeid(::larlite::TunedEdX), DefineBehavior(ptr, ptr),
                  &larlitecLcLTunedEdX_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::TunedEdX) );
      instance.SetNew(&new_larlitecLcLTunedEdX);
      instance.SetNewArray(&newArray_larlitecLcLTunedEdX);
      instance.SetDelete(&delete_larlitecLcLTunedEdX);
      instance.SetDeleteArray(&deleteArray_larlitecLcLTunedEdX);
      instance.SetDestructor(&destruct_larlitecLcLTunedEdX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::TunedEdX*)
   {
      return GenerateInitInstanceLocal((::larlite::TunedEdX*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::TunedEdX*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLTunedEdX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::TunedEdX*)0x0)->GetClass();
      larlitecLcLTunedEdX_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLTunedEdX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLChargeCal(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ChargeCal : new ::larlite::ChargeCal;
   }
   static void *newArray_larlitecLcLChargeCal(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ChargeCal[nElements] : new ::larlite::ChargeCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLChargeCal(void *p) {
      delete ((::larlite::ChargeCal*)p);
   }
   static void deleteArray_larlitecLcLChargeCal(void *p) {
      delete [] ((::larlite::ChargeCal*)p);
   }
   static void destruct_larlitecLcLChargeCal(void *p) {
      typedef ::larlite::ChargeCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ChargeCal

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLTunedEdX(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::TunedEdX : new ::larlite::TunedEdX;
   }
   static void *newArray_larlitecLcLTunedEdX(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::TunedEdX[nElements] : new ::larlite::TunedEdX[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLTunedEdX(void *p) {
      delete ((::larlite::TunedEdX*)p);
   }
   static void deleteArray_larlitecLcLTunedEdX(void *p) {
      delete [] ((::larlite::TunedEdX*)p);
   }
   static void destruct_larlitecLcLTunedEdX(void *p) {
      typedef ::larlite::TunedEdX current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::TunedEdX

namespace {
  void TriggerDictionaryInitialization_libmyana_recombination_Impl() {
    static const char* headers[] = {
"ChargeCal.h",
"TunedEdX.h",
0
    };
    static const char* includePaths[] = {
"/Users/xl444/larlite/core",
"/Users/xl444/Software/ROOT/root6//include/root",
"/Users/xl444/larlite/UserDev/myana/recombination/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace larlite{class __attribute__((annotate("$clingAutoload$ChargeCal.h")))  ChargeCal;}
namespace larlite{class __attribute__((annotate("$clingAutoload$TunedEdX.h")))  TunedEdX;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ChargeCal.h"
#include "TunedEdX.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larlite::ChargeCal", payloadCode, "@",
"larlite::TunedEdX", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libmyana_recombination",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libmyana_recombination_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libmyana_recombination_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libmyana_recombination() {
  TriggerDictionaryInitialization_libmyana_recombination_Impl();
}
